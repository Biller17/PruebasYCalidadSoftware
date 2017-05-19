
#codigo hecho por Adrian BIller A01018940

require 'rubygems'
require 'selenium-webdriver'

browser = Selenium::WebDriver.for :chrome
browser.get "https://twitter.com/signup"

signinmail = browser.find_element(:id, "signin-email" )
signinmail.send_keys "A01018940@itesm.mx"


signinpass = browser.find_element(:id, "signin-password" )
signinpass.send_keys "123456Contrasena"




post = browser.find_element(:id, "tweet-box-home-timeline" )
post.send_keys "This is my bot's post"
