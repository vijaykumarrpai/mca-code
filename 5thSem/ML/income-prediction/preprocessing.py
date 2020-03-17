#!/usr/bin/env python
# coding: utf-8

# # Preprocessing

# In[24]:


import pandas as pd
import numpy as np
from sklearn import preprocessing


# In[25]:


df = pd.read_csv('C:/Users\/Vijaykumar R Pai.LAPTOP-C26T1P75/income-prediction/adult.csv')
df.head()


# In[26]:


df = df.drop(['fnlwgt', 'educational-num'], axis = 1)
col_names = df.columns
for c in col_names:
    df = df.replace("?", np.NaN)
    df = df.apply(lambda x:x.fillna(x.value_counts().index[0]))


# In[27]:


df.replace(['Divorced', 'Married-AF-spouse',  
              'Married-civ-spouse', 'Married-spouse-absent',  
              'Never-married', 'Separated', 'Widowed'], 
             ['divorced', 'married', 'married', 'married', 
              'not married', 'not married', 'not married'], inplace = True)

category_col =['workclass', 'race', 'education', 'marital-status', 'occupation', 
               'relationship', 'gender', 'native-country', 'income']
labelEncoder = preprocessing.LabelEncoder()

mapping_dict = {}
for col in category_col:
    df[col] = labelEncoder.fit_transform(df[col])
    
    le_name_mapping = dict(zip(labelEncoder.classes_, labelEncoder.transform(labelEncoder.classes_)))
    mapping_dict[col] = le_name_mapping
    print(mapping_dict)


# # Fitting the model

# In[28]:


from sklearn.model_selection import train_test_split
from sklearn.tree import DecisionTreeClassifier
from sklearn.metrics import accuracy_score


# In[31]:


X = df.values[:, 0:12]
Y = df.values[:, 12]


# In[35]:


X_train, X_test, y_train, y_test = train_test_split(X, Y, test_size = 0.3, random_state = 100)
dt_clf = DecisionTreeClassifier(criterion = "entropy", random_state = 100, max_depth = 5, min_samples_leaf = 5)
dt_clf.fit(X_train, y_train)
y_pred = dt_clf.predict(X_test)


# In[36]:


print ("Accuracy is ", accuracy_score(y_test,y_pred) * 100)


# # Pickle

# In[37]:


import pickle
pickle.dump(dt_clf, open("model.pkl","wb"))

