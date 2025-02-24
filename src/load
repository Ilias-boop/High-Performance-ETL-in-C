#include <libpq-fe.h>

void load_to_postgresql(const char *data) {
    PGconn *conn = PQconnectdb("host=localhost dbname=mydb user=myuser password=mypassword");

    if (PQstatus(conn) == CONNECTION_BAD) {
        printf("Erreur connexion PostgreSQL : %s\n", PQerrorMessage(conn));
        PQfinish(conn);
        return;
    }

    char query[256];
    snprintf(query, sizeof(query), "INSERT INTO etl_table (data) VALUES ('%s')", data);
    PGresult *res = PQexec(conn, query);

    if (PQresultStatus(res) != PGRES_COMMAND_OK) {
        printf("Erreur insertion PostgreSQL : %s\n", PQerrorMessage(conn));
    } else {
        printf("Donnée insérée avec succès\n");
    }

    PQclear(res);
    PQfinish(conn);
}