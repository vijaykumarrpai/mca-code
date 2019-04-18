#!/usr/bin/env python
# coding: utf-8

# In[2]:


import matplotlib.pyplot as plt
import numpy as np
from sklearn import linear_model
import pandas as pd
from sklearn.metrics import mean_squared_error
from math import sqrt


# In[32]:


df = pd.read_csv("D:/Study/MCA/4th Sem/DA/cars.csv")
df.head()


# In[33]:


X = df["hp"]
Y = df["wt"]
print(X)
print(Y)
X = X.values
Y = Y.values
X = X.reshape(len(X), 1)
Y = Y.reshape(len(Y), 1)
print(X)
print(Y)


# In[34]:


X_train = X[:-7]
X_test = X[-7:]
Y_train = Y[:-7]
Y_test = Y[-7:]
print(X_train)
print(X_test)
print(Y_train)
print(Y_test)


# In[35]:


regr = linear_model.LinearRegression()

regr.fit(X_train, Y_train)

Y_pred = regr.predict(X_test)

plt.scatter(X_test, Y_pred, color = 'red', linewidth = 5)


# In[36]:


rms = sqrt(mean_squared_error(X_test, Y_pred))
print(rms)

