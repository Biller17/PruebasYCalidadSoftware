#http://bit.ly/watir-example

require 'rubygems'
require 'selenium-webdriver'

browser = Selenium::WebDriver.for :firefox
browser.get "http://bit.ly/watir-example"

#fill name in name textbox
_name = browser.find_element :name => "entry.1000000"
_name.send_keys "Adrian Biller Alcantara"

#fill the mystory textbox
_myStory = browser.find_element :name => "entry.1000001"
_myStory.send_keys "Mi historia"

#click on watir radio
_radios = browser.find_element(id: "group_1000002_1").click

#checking checkboxes with y in their names
checkboxes = browser.find_elements(css: 'input[type="checkbox"]')
checkboxes.each {
    |checkbox| if checkbox.attribute('value').include? "y"
    checkbox.click
    end
}

#checking the number of elements in the dropdown menu
dropDown = browser.find_element(name: 'entry.1000004')
options = dropDown.find_elements(tag_name: 'option')
if options.length == 7
    puts "There are 7 elements "
else
    puts "There are less than 7 elements"
end


#check the Firefox option

dropDown.click
dropDown.find_elements( :tag_name => "option" ).find do |option|
  option.text == "Firefox"
end.click

#check all the other radios

_secondRadio = browser.find_element(id: "group_1000005_3").click
_thirdRadio = browser.find_element(id: "group_1000006_2").click


#click submit
_send = browser.find_element(name: "submit").click
