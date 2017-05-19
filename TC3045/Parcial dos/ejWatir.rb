#http://bit.ly/watir-example

require 'rubygems'
require 'watir'

browser = Watir::Browser.new :firefox

browser.goto 'http://bit.ly/watir-example'

browser.text_field(:name => 'entry.1000000').set 'text'

puts browser.text_field(:name => 'entry.1000000').value

browser.textarea(:name => 'entry.1000001').set "Mi historia"

puts browser.textarea(:name => 'entry.1000001').value
#browser.textarea(:css => 'textarea[name="entry.1000001"]').clear
#browser.textarea(:xpath => '//textarea[@name ="entry.10000001"]').set "hola"


#hacer click en el radio con el nombre de entry.1000002
browser.radio(:name => 'entry.1000002').click
#obtener multiples elementos


checkboxes = browser.checkbox()

item1 = browser.radios(:id => /group_1000006/).map do |item|
  item.value
end

values = ["1","2","3","4","5"]


#puts browser.text_field(:name => "name").displayed?


#puts item1
