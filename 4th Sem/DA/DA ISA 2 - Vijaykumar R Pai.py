#!/usr/bin/env python
# coding: utf-8

# In[65]:


import pandas as pd
import matplotlib.pyplot as plt
import seaborn as sns
from sklearn.cluster import KMeans
from sklearn import preprocessing
from sklearn.model_selection import train_test_split
from sklearn.linear_model import LogisticRegression
from sklearn import metrics


# In[2]:


df = pd.read_csv("D:/Study/MCA/4th Sem/DA/csv/HR.csv")
df.head()


# In[3]:


df.tail()


# In[4]:


df.info()


# In[5]:


df.describe()


# In[8]:


X = df.groupby('left')
X.mean()


# In[9]:


X = df['left']
X.mean()


# In[20]:


# X -> employess left
X = df.groupby('left').count()
print(X)
plt.bar(X.index.values, X['satisfaction_level'])
plt.xlabel('Employees left')
plt.ylabel('No of employees')
plt.show()


# # Calculate no of employees left

# In[18]:


df.left.value_counts()
# So the employees who left are - 3571. 11428 stayed.


# In[33]:


n_projects = df.groupby('number_project').count()
plt.bar(n_projects.index.values, n_projects['satisfaction_level'])
plt.show()


# # Find out the minimum 3 group of employees based on satisfaction level and the evaluation of the employee

# In[41]:


emp_left = df[['satisfaction_level', 'last_evaluation']]
km = KMeans(n_clusters = 3, random_state = 0).fit(emp_left)


# In[43]:


emp_left['label'] = km.labels_
plt.scatter(emp_left['satisfaction_level'], emp_left['last_evaluation'], c = emp_left['label'])


# # Group 1 : high satisfaction and high evalation Group 2: Low satisfaction and high Evaluation Group 3: moderate satisfaction and moderate evaluation

# In[ ]:


Yellow = Low satisfaction and high Evaluation Group 
Violet = High satisfaction and high evaluation group
Green =  Moderate satisfaction and moderate evaluation group


# # Predict how many employees in the organization may leave according to the pattern modelled earlier with 3 groups

# In[54]:


leave = preprocessing.LabelEncoder()
df['salary'] = leave.fit_transform(df['salary'])
df['Departments '] = leave.fit_transform(df['Departments '])


# In[63]:


X = df[['satisfaction_level', 'last_evaluation', 'number_project',
       'average_montly_hours', 'time_spend_company', 'Work_accident',
       'promotion_last_5years', 'Departments ', 'salary']]
Y = df['left']


# In[64]:


X_train, X_test, Y_train, Y_test = train_test_split(X, Y, test_size=0.3, random_state=42)
logR = LogisticRegression()
logR.fit(X_train, Y_train)
predR = logR.predict(X_test)
print(predR)


# In[67]:


print("Accuracy:", metrics.accuracy_score(Y_test, predR))
print("Precision:", metrics.precision_score(Y_test, predR))
print("Recall:", metrics.recall_score(Y_test, predR))


# # Employees who have not left

# In[31]:


X = df.groupby('left').count()
print(X)
plt.bar(X.index.values, X['satisfaction_level'])
plt.xlabel('Employees not left')
plt.ylabel('No of employees')
plt.show()
# employees who have not left are - 11428


# In[ ]:




