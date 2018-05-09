import pandas as pd 

df= pd.read_csv("AAPL.csv", parse_dates=["Date"])
print(df.head(5))
print(type(df.Date[0]))