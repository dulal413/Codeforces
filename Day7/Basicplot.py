# For data creation
import pandas as pd
import  numpy as np

import matplotlib.pyplot as plt

df = pd.DataFrame(
    {
        'age' : np.random.randint(25 , 30 , size = 100),
        'salary' : np.round(np.random.random(100) * 50 , 2)
    }
)
df.head()

df = df.assign(
    expected_salary = lambda df : df['salary'] + (df['age'] - (df['age'].min()))
)

salary_by_age = df.groupby('age').agg('mean')
salary_by_age.head()

x     = salary_by_age.index
y_act = salary_by_age['salary'].values
y_exp = salary_by_age['expected_salary']

plt.plot(x , y_act);
