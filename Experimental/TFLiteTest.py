from tf.lite_runtime.interpreter import tflite

interpreter = tf.lite.Interpreter('D:\\Battery Management System\\Code\\BMS\\NeuralNetwok\\model.tflite')
interpreter.allocate_tensors()

current = 0
temperature = 15
voltage = 4.12238

test_input = [current, temperature, voltage]

input_index = interpreter.get_input_details()
output_index = interpreter.get_output_details()

interpreter.set_tensor(input_index, test_input)
interpreter.invoke()
predictions = interpreter.get_tensor(output_index)