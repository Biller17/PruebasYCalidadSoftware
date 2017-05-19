#codigo hecho por adrian Biller A01018940


require 'rubygems'
require 'selenium-webdriver'

browser = Selenium::WebDriver.for :chrome
browser.get "https://twitter.com/signup"



name = browser.find_element(:id, "full-name" )
name.send_keys "DonFalso"


mail = browser.find_element(:id, "email" )
mail.send_keys "A01018940@itesm.mx"



pass = browser.find_element(:id, "password" )
pass.send_keys "123456Contrasena"


button = browser.find_element(:id, "submit_button" ).click


sleep 10

phone = browser.find_element(:id, "phone_number" )
phone.send_keys "5521374775"


browser.get "https://twitter.com/signup"

signinmail = browser.find_element(:id, "signin-email" )
signinmail.send_keys "A01018940@itesm.mx"


signinpass = browser.find_element(:id, "signin-password" )
signinpass.send_keys "123456Contrasena"




post = browser.find_element(:id, "tweet-box-home-timeline" )
post.send_keys "This is my bot's post"
