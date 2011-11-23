-- SUMMARY --

Language Assignment lets you set the language of multiple nodes or users at a
time. You may find it useful if:

* You're adding multilingual capability to an existing site, and you want to
  assign languages to your existing content and users.

* Users haven't been setting the language field correctly in content they've
  created, or in their own accounts.

To use the module, go to the bulk node update form (admin/content/node in D6,
admin/content in D7) or bulk user update form (admin/user/user in D6,
admin/people in D7). In the Update options selector, you'll see a "Set language"
operation available for each of your installed languages. (It also adds a
Language column to the user table in the bulk user update form.)

If Views bulk operations is installed at your site, then a "Set language"
operation will also become available in your node and user bulk operation-style
views. To enable the operation, edit your view, click on the gear icon to edit
the "Bulk operations" style options, check the "Set user language" or "Set node
language" checkbox, and save the view.


-- REQUIREMENTS --

You must enable the Locale module (in Core - optional) in order to use
Language assignment.


-- INSTALLATION --

Install as usual, see http://drupal.org/node/70151 for further information.


-- CONFIGURATION --

None specific to this module.  Once you enable a language at Administer >
Configuration > Languages, options to apply it in bulk to your existing nodes
and users will appear at Administer > Content and Administer > People.


-- CONTACT --

Maintainer: Andrew Schulman - http://drupal.org/user/279446
