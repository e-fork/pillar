pillar
======

Drupal 7 Profile/Distribution for fast projectcreation

Quick install and usage
=======================

To use pillar from scratch create a new project directory, copy paste just the "pillar.make" file in it and execute following command:

```batchfile
drush make pillar.make
```

After that the whole Drupal 7 with all modules, themes and the install profile pillar will be downloaded to your directory. After that visit your new site for example on "localhost" and install your website. As default the pillar installprofile is selected. 

@note: if you want to change the installprofile to standard chengae the parameter in the url.

After your website is installed do a drush up to update all installed modules. You also should update all languages over the UI.

Now you are ready to install a new subtheme from foundation with following command:

```batchfile
drush fst [THEMENAME] [!OPTIONAL DESCRIPTION]
```

Finally clear your cache:

```batchfile
drush cc all
```

Now you are ready to develop your new website with the power of pillar ;)

Under the hood
==============
