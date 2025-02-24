#!/usr/bin/env python
# coding: utf-8

# In[ ]:


import csv
import random
from datetime import datetime, timedelta


# In[ ]:


# File path

file_path = "sample.csv"

# Generate random data
def random_date(start, end):
    return start + timedelta(days=random.randint(0, (end - start).days))

# Date range for 'created_at' field
start_date = datetime(2020, 1, 1)
end_date = datetime(2024, 1, 1)

# Create and write to the CSV file
with open(file_path, mode="w", newline="") as file:
    writer = csv.writer(file)
    writer.writerow(["id", "name", "age", "email", "salary", "created_at"])  # Header row

    for i in range(1, 10_000_001):  # 10 million rows
        name = f"User{i}"
        age = random.randint(18, 65)
        email = f"user{i}@example.com"
        salary = random.randint(30000, 120000)
        created_at = random_date(start_date, end_date).strftime("%Y-%m-%d")

        writer.writerow([i, name, age, email, salary, created_at])

print("✅ 10M rows CSV file generated successfully!")


# In[ ]:




