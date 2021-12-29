import pandas as pd
import numpy as np
df = pd.read_csv("name.csv")


inputs=df


from sklearn.preprocessing import LabelEncoder
le_division = LabelEncoder()
le_apices = LabelEncoder()
le_basics = LabelEncoder()
le_shape = LabelEncoder()
le_margins = LabelEncoder()
le_patterns = LabelEncoder()

#inputs['division_n'] = le_division.fit_transform(inputs['leaf_division'])
inputs['apices_n'] = le_apices.fit_transform(inputs['leaf_apices'])
inputs['basics_n'] = le_basics.fit_transform(inputs['leaf_basics'])
inputs['shape_n'] = le_shape.fit_transform(inputs['leaf_shape'])
inputs['margins_n'] = le_margins.fit_transform(inputs['margins'])
inputs['pattern_n'] = le_patterns.fit_transform(inputs['patterns'])
print(inputs.head(len(inputs)))


input_n = inputs.drop(['leaf_division','leaf_apices','leaf_basics','leaf_shape','margins','patterns'],axis='columns')

np.random.seed(42)
msk = np.random.rand(len(input_n)) <= 0.7

train = input_n[msk]
test = input_n[~msk]
#print(test.head())
# testing data
testinput=[]
y_test=[]
for index, row in test.iterrows():
   testinput.append([row['apices_n'],row['basics_n'],row['shape_n'],row['margins_n'],row['pattern_n']])
   y_test.append(row['final_decision'])
# print(testinput)
# print(y_test)


#print(train)
#print(test)


modelinput = train.drop('final_decision',axis='columns')
modeltarget=train['final_decision']

from sklearn import tree
model = tree.DecisionTreeClassifier()
print(model.fit(modelinput,modeltarget))

print(model.score(modelinput,modeltarget))
#testing
print(testinput)
y_predict=model.predict(testinput)
print(y_predict)
print(y_test)
from sklearn.metrics import accuracy_score,classification_report,confusion_matrix
print(accuracy_score(y_test,y_predict))



from sklearn import metrics
print('Mean Absolute Error:', metrics.mean_absolute_error(y_test, y_predict))
print('Mean Squared Error:', metrics.mean_squared_error(y_test, y_predict))
print('Root Mean Squared Error:', np.sqrt(metrics.mean_squared_error(y_test, y_predict)))
