; $Id$

name = Profiler Example
core = 6.x
theme = chameleon

; You could specify this as a base Profiler include by using the following in
; your own Install profile's Profiler include. Then everything in this file
; would be merged with your Profiler include.

;base = profiler_example


; ------------------------------
;           Modules
; ------------------------------
; Core
modules[core][] = filter
modules[core][] = help
modules[core][] = menu
modules[core][] = node
modules[core][] = path
modules[core][] = system
modules[core][] = user

; Contrib
modules[contrib][] = admin_menu
modules[contrib][] = date_api
modules[contrib][] = imageapi
modules[contrib][] = imageapi_gd
modules[contrib][] = imagecache
modules[contrib][] = imagecache_ui
modules[contrib][] = token
modules[contrib][] = globalredirect
modules[contrib][] = content
modules[contrib][] = fieldgroup
modules[contrib][] = filefield
modules[contrib][] = imagefield
modules[contrib][] = number
modules[contrib][] = optionwidgets
modules[contrib][] = text
modules[contrib][] = views
modules[contrib][] = views_ui
modules[contrib][] = views_exporter
modules[contrib][] = advanced_help
modules[contrib][] = features
modules[contrib][] = pathauto
modules[contrib][] = wysiwyg
modules[contrib][] = markdown
modules[contrib][] = transliteration


; ------------------------------
;           Features
; ------------------------------
; Specify features thusly:
;features[] = example_feature


; ------------------------------
;           Roles
; ------------------------------

; Roles are kinda tricky, because the role ids are what makes them work, yet 
; role ids are given in the order in which the roles are created. For this 
; reason there are two ways of specifying roles here. You can either just make 
; an array of roles with the values being the name of the role, or you can make 
; the value be a nested array and specify the role id manually. Take care when 
; using this latter method. Role id's 1 and 2 are reserved in Drupal.

; Note how a text key ('admin' & 'publisher') is used in both instances. This 
; isn't strictly necessary, as you could just empty brackets (roles[] = Admin),
; however if you create a Sub-Profiler include based off this include, you 
; wouldn't have a way of overriding these values if you needed to. Best to use 
; text keys just in case.

; ------- Method 1 --------
roles[admin] = Admin

; ------- Method 2 --------
roles[publisher][rid] = 4
roles[publisher][name] = Publisher


; ------------------------------
;           Users
; ------------------------------

; Keep in mind when adding users like this that you are proceeding at your own
; risk. You are writing in plain text certain data that could compromise your 
; site. The password field you specify for any user should be an md5 hashed 
; password.
users[siteadmin][uid]    = 2
users[siteadmin][name]   = siteadmin
users[siteadmin][mail]   = changeme@email.com
users[siteadmin][pass]   = 10aa208e7e9e257a3f4fe66d1acf84e8
users[siteadmin][roles]  = Admin,Publisher
users[siteadmin][status] = 1


; ------------------------------
;          Input Formats
; ------------------------------

; Roles, in the format of [roles][] = roleid
; Filters, in the format of [filters][module][delta] = weight

input-formats[WYSIWYG][roles] = Admin,Publisher
input-formats[WYSIWYG][filters][filter][0] = -8
input-formats[WYSIWYG][filters][filter][1] = -7
input-formats[WYSIWYG][filters][filter][2] = -9
input-formats[WYSIWYG][filters][filter][3] = -6
input-formats[WYSIWYG][allowed-html] = "<a> <p> <em> <strong> <span> <h1> <h2> <h3> <h4> <h5> <blockquote> <cite> <code> <ul> <ol> <li> <dl> <dt> <dd> <img> <table> <thead> <tbody> <tfoot> <th> <tr> <td>"
input-formats[WYSIWYG][wysiwyg][editor] = tinymce
input-formats[WYSIWYG][wysiwyg][settings][default] = 1
input-formats[WYSIWYG][wysiwyg][settings][user_choose] = 0
input-formats[WYSIWYG][wysiwyg][settings][show_toggle] = 0
input-formats[WYSIWYG][wysiwyg][settings][theme] = advanced
input-formats[WYSIWYG][wysiwyg][settings][language] = en
input-formats[WYSIWYG][wysiwyg][settings][buttons][default][bold] = 1
input-formats[WYSIWYG][wysiwyg][settings][buttons][default][italic] = 1
input-formats[WYSIWYG][wysiwyg][settings][buttons][default][underline] = 1
input-formats[WYSIWYG][wysiwyg][settings][buttons][default][bullist] = 1
input-formats[WYSIWYG][wysiwyg][settings][buttons][default][numlist] = 1
input-formats[WYSIWYG][wysiwyg][settings][buttons][default][outdent] = 1
input-formats[WYSIWYG][wysiwyg][settings][buttons][default][indent] = 1
input-formats[WYSIWYG][wysiwyg][settings][buttons][default][link] = 1
input-formats[WYSIWYG][wysiwyg][settings][buttons][default][unlink] = 1
input-formats[WYSIWYG][wysiwyg][settings][buttons][default][image] = 1
input-formats[WYSIWYG][wysiwyg][settings][buttons][paste][pastetext] = 1
input-formats[WYSIWYG][wysiwyg][settings][buttons][font][formatselect] = 1
input-formats[WYSIWYG][wysiwyg][settings][buttons][font][styleselect] = 1
input-formats[WYSIWYG][wysiwyg][settings][buttons][table][tablecontrols] = 1
input-formats[WYSIWYG][wysiwyg][settings][buttons][safari][safari] = 1
input-formats[WYSIWYG][wysiwyg][settings][buttons][imce][imce] = 1
input-formats[WYSIWYG][wysiwyg][settings][toolbar_loc] = top
input-formats[WYSIWYG][wysiwyg][settings][toolbar_align] = left
input-formats[WYSIWYG][wysiwyg][settings][path_loc] = bottom
input-formats[WYSIWYG][wysiwyg][settings][resizing] = 1
input-formats[WYSIWYG][wysiwyg][settings][verify_html] = 1
input-formats[WYSIWYG][wysiwyg][settings][preformatted] = 0
input-formats[WYSIWYG][wysiwyg][settings][convert_fonts_to_spans] = 1
input-formats[WYSIWYG][wysiwyg][settings][remove_linebreaks] = 1
input-formats[WYSIWYG][wysiwyg][settings][apply_source_formatting] = 0
input-formats[WYSIWYG][wysiwyg][settings][paste_auto_cleanup_on_paste] = 0
input-formats[WYSIWYG][wysiwyg][settings][block_formats] = p,h2,h3,h4,h5,blockquote
Image with Border=border
Float Left=left
Float Right=right
Hide=hide"

input-formats[Markdown][default] = 1
input-formats[Markdown][roles] = anonymous user,authenticated user
input-formats[Markdown][filters][markdown][0] = -10
input-formats[Markdown][filters][filter][0] = -7
input-formats[Markdown][filters][filter][1] = -8
input-formats[Markdown][filters][filter][2] = -9
input-formats[Markdown][filters][filter][3] = -6
input-formats[Markdown][allowed-html] = "<a> <p> <em> <strong> <span> <h1> <h2> <h3> <h4> <h5> <blockquote> <cite> <code> <ul> <ol> <li> <dl> <dt> <dd> <img> <table> <thead> <tbody> <tfoot> <th> <tr> <td>"


; ------------------------------
;          Variables
; ------------------------------
variables[site_name] = Profiler Example
variables[site_footer] = Profiler Example
variables[site_frontpage] = node/1
variables[theme_settings][toggle_node_info_page] = 0


; ------------------------------
;          Permissions
; ------------------------------
permissions[access administration pages] = Admin,Publisher
permissions[access content] = anonymous user,authenticated user
permissions[access user profiles] = Admin
permissions[administer menu] = Admin,Publisher
permissions[administer nodes] = Admin,Publisher
permissions[administer site configuration] = Admin
permissions[administer users] = Admin
permissions[change own username] = authenticated user
permissions[create page content] = Admin,Publisher
permissions[create users] = Admin
permissions[delete any page content] = Admin,Publisher
permissions[delete own page content] = Admin,Publisher
permissions[edit any page content] = Admin,Publisher
permissions[flush imagecache] = Admin
permissions[notify of path changes] = Admin,Publisher
permissions[search content] = anonymous user


; ------------------------------
;          Nodes types
; ------------------------------
node-types[page][type] = page
node-types[page][name] = Page
node-types[page][has_body] = 1
node-types[page][body_label] = Body
node-types[page][module] = node
node-types[page][description] = A <em>page</em> is simply what it sounds like - it's a page on your website.
node-types[page][custom] = 1
node-types[page][modified] = 1
node-types[page][locked] = 0
node-types[page][help] = ''
node-types[page][min_word_count] = ''


; ------------------------------
;             Nodes
; ------------------------------
nodes[front][type] = page
nodes[front][title] = Isn't Profiler nifty?
nodes[front][uid] = 2
nodes[front][body] = <p>Donec vel ipsum elit. In rutrum, ante at fringilla pharetra, mi justo fermentum risus; eget commodo est mi lobortis augue. Proin fringilla malesuada semper. Ut velit sapien, condimentum vel faucibus ut, aliquam quis dui? Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas. Vivamus vulputate fringilla enim, non convallis nibh lacinia at. Etiam fermentum, lectus ac sagittis volutpat, est augue tincidunt mi, et consectetur orci nisi sit amet sapien. Ut nisi nunc, molestie quis sollicitudin at, dignissim eget nisl? Sed vitae sem lectus. Curabitur viverra laoreet magna. Sed eget sapien tellus, eu tempor purus. Proin dignissim, lacus vitae venenatis porttitor, justo libero rhoncus felis, nec dictum nisl mi vitae nisi. Maecenas tincidunt eros at turpis sollicitudin nec viverra enim condimentum. Sed nec enim justo. In tristique risus dui; ac egestas mi. Proin at arcu sed enim eleifend ornare eu at arcu. Curabitur ullamcorper, ipsum eu imperdiet pharetra, mauris lorem hendrerit metus, in consectetur mauris est iaculis eros. Quisque euismod hendrerit metus ullamcorper tempus! Cras gravida ornare arcu vitae commodo. In hac habitasse platea turpis duis.</p>


; ------------------------------
;             Menus
; ------------------------------

; Create a new menu called Footer Links.
menus[menu-footer-links][title] = Footer Links

; Now add some Menu items to existing menus.
menu-items[login][link_path]  = user/login
menu-items[login][link_title] = Login
menu-items[login][weight]     = 10
menu-items[login][menu_name]  = menu-footer-links

menu-items[logout][link_path]  = logout
menu-items[logout][link_title] = Logout
menu-items[logout][weight]     = 10
menu-items[logout][menu_name]  = menu-footer-links

menu-items[front][link_path]  = <front>
menu-items[front][link_title] = Home
menu-items[front][weight]     = -10
menu-items[front][menu_name]  = primary-links


; ------------------------------
;            Blocks
; ------------------------------
blocks[menu-menu-footer-links][module] = menu
blocks[menu-menu-footer-links][delta] = menu-footer-links
blocks[menu-menu-footer-links][region] = right
