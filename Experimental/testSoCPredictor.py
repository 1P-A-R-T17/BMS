# -*- coding: utf-8 -*-
"""
Created on Sat Jun 26 16:21:38 2021

@author: rachi
"""

import tensorflow as tf
from tensorflow import keras
#print(tf.version)

model = keras.models.load_model('C:\\Users\\rachi\\Desktop\\soc_predictor.h5')

current = 0
temperature = 15
voltage = 4.12238

input = [[current, temperature, voltage]]



print(input)

print(model.predict(input))