import pandas as pd

# Read in the Excel file
df = pd.read_excel("BWD actual water used_2017_2022.xlsx")

# Convert the Excel columns to a Python data structure (e.g. a list of dictionaries)
print(df[["column1","column2"]])


# Print the resulting data
print(data)




