#!/usr/bin/env python
# coding: utf-8

# In[10]:


import matplotlib.pyplot as plt
import numpy as np
from sklearn import linear_model
import pandas as pd
from sklearn.metrics import mean_squared_error
from math import sqrt


# In[12]:


df = pd.read_csv("D:/Study/MCA/4th Sem/DA/Housing.csv")
df.head()


# In[13]:


Y = df['lotsize']
X = df['price']
print(type(X))
print(type(Y))
X = X.values
X = X.reshape(len(X), 1)
print(X)
Y = Y.values
Y = Y.reshape(len(Y), 1)
print(Y)


# In[14]:


X_train = X[:-110]
X_test = X[-110:]
print(X_train)
print(X_train)

Y_train = Y[:-110]
Y_test = Y[-110:]
print(Y_train)
print(Y_train)


# In[15]:


regr = linear_model.LinearRegression()

regr.fit(X_train, Y_train)

Y_pred = regr.predict(X_test)

plt.plot(X_test, Y_pred, color = 'blue', linewidth = 5)


# In[16]:


rms = sqrt(mean_squared_error(Y_test, Y_pred))
print(rms)

