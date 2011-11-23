Search API Attachments

This module will extract the content out of attached files using the Tika library and index it.
Search API attachments will index many file formats, including PDF's, MS Office, MP3 (ID3 tags), JPEG Metadata, ...

The module was tested with Apache Solr, however it should work on all Search API search servers.
Database Search gives errors on saving but should work (Core Issue: http://drupal.org/node/1007830)

More information:
http://tika.apache.org/download.html

REQUIREMENTS
------------

Requires the ability to run java on your server and an installation of the Apache Tika library


INSTALLATION
------------

On Ubuntu 10.10

Install java
> sudo apt-get install openjdk-6-jdk

Install Maven2
> sudo apt-get install maven2

Download Apache Tika library: http://tika.apache.org/download.html
> wget http://apache.mogo.be//tika/apache-tika-0.8-src.zip

Change to folder
> cd apache-tika-0.8-src

Install Tika
> mvn install

This will build the jar file in a subfolder tika-app/target

Copy search_api_attachments into your modules folder

Install the search_api_attachments module in your Drupal site

Go to the configuration: admin/config/search/search_api/attachments

Enter the full path on your server where you build the jar e.g. /var/apache-tika-0.8-src/tika-app/target/ 
and the name of the jar file e.g. tika-app-0.8.jar