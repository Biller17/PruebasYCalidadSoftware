#https://docs.google.com/forms/d/e/1FAIpQLScibDlJbtkFcjSXUBLmfupPkqKslmHIpjHGHdNberFVSNP6Pw/viewform?c=0&w=1



#evaluacion, codigo hecho por Adrian Biller Alantara A01018940

require 'rubygems'
require 'selenium-webdriver'

browser = Selenium::WebDriver.for :firefox
browser.get "https://docs.google.com/forms/d/e/1FAIpQLScibDlJbtkFcjSXUBLmfupPkqKslmHIpjHGHdNberFVSNP6Pw/viewform?c=0&w=1"

#fill name in name textbox
_name = browser.find_element :name => "entry.565481634"
_name.send_keys "Adrian Biller Alcantara"



_matricula = browser.find_element :name => "entry.1599836428"
_matricula.send_keys "A01018940"


_checkboxes = browser.find_elements(:class => "freebirdFormviewerViewItemsCheckboxContainer").each do |e|
 e
end

if _checkboxes.length == 6
    puts "There are 6 elements "
else
    puts "There are less than 6 elements"
end

_checkboxes[2].click



_radios = browser.find_elements(:class => "freebirdFormviewerViewItemsRadioControl").each do |r|
  r
end
_radios[1].click


_loadTesting = browser.find_element :name => "entry.1943388466"
_loadTesting.send_keys "Es un test que implica hacer que la computadora trabaje llegando a los limites de sus especificaciones"



_testcases = browser.find_elements(:class => "freebirdFormviewerViewItemsRadioControl").each do |t|
  t
end
_testcases[4].click
_testcases[10].click
_testcases[12].click


_notExercised = browser.find_elements(:id => "1328942553")

_options = _notExercised.select().each do |radio|
  radio
end


if _options.length == 4
    puts "There are 4 elements"
else
    puts "There are less than 4 elements"
end


_radioBox = browser.find_elements(css: 'label.freebirdFormviewerViewItemsGridCell')
_radioBox[6].click
_radioBox[11].click
_radioBox[25].click
_radioBox[34].click
_radioBox[40].click
_radioBox[51].click
_radioBox[65].click
_radioBox[78].click
_radioBox[88].click
_radioBox[93].click

if _radioBox.length == 100
  puts "The table is 10 by 10 elements"
else
  puts "The table is different from 10 by 10 elements"
end


_condition = browser.find_element :name => "entry.2061122182"
_condition.send_keys "Es un tipo de testing en donde cada una de las expresiones booleanas se debe testear como true y como false, un ejemplo es cuando se tienen variable A B y C, todas deben ser al menos una vez true y una vez false."

_multiple = browser.find_element :name => "entry.980720621"
_multiple.send_keys "como en condition coverage se refiere a variables booleanas pero en este caso se deben cumplir todas las condiciones posibles de true y false entre todas las variables. Un ejemplo de esto puede ser una tabla de verdad en la que se busca mostrar todas las condiciones posibles de verdadero y falso."

_stress = browser.find_element :name => "entry.1285916526"
_stress.send_keys "Es una prueba en la que se somete al dispositivo a grandes cargas de procesamiento para asegurar que funcione de manera correcta en caso de cargas normales de trabajo"
