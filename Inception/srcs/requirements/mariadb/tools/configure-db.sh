#!/bin/sh

mariadb-install-db --user=mysql --datadir=/var/lib/mysql
mariadbd-safe &

# /etc/init.d/mariadb setup



mariadb -e "DROP DATABASE IF EXISTS basedb"
mariadb -e "CREATE DATABASE IF NOT EXISTS $WP_DATABASE_NAME; GRANT ALL PRIVILEGES ON $WP_DATABASE_NAME.* TO '$WP_DATABASE_USER'@'%' IDENTIFIED BY '$WP_DATABASE_PASSWORD';"
mariadb -e "ALTER USER '$WP_DATABASE_ROOT'@'localhost' IDENTIFIED BY '$WP_DATABASE_ROOT_PASSWORD'; FLUSH PRIVILEGES;"

mariadbd-safe &
