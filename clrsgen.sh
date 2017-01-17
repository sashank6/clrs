#!/bin/bash



/usr/local/bin/markdown-pdf ~/Github/clrs/**/*.md -o $(date +%m-%d).pdf
/usr/local/bin/mutt -s "Daily CLRS Review" alladisashank@gmail.com -a $(date +%m-%d).pdf < ~/NeelaRudra/CloudStation/MyNotes/msg.txt
/usr/local/bin/mutt -s "Daily CLRS Review" sranjani06@gmail.com -a $(date +%m-%d).pdf < ~/NeelaRudra/CloudStation/MyNotes/msg.txt
cp $(date +%m-%d).pdf /Users/sashankalladi/Library/Application\ Support/Kindle/My\ Kindle\ Content/
rm $(date +%m-%d).pdf
