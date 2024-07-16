FROM postgres:14

# Install PostGIS packages
RUN echo 'debconf debconf/frontend select Noninteractive' | debconf-set-selections
RUN apt update
RUN apt install --no-install-recommends --yes 
RUN apt install postgis postgresql-14-postgis-3 -y -q
# ENV POSTGRES_DB postgres
# ENV POSTGRES_USER postgres
# ENV POSTGRES_PASSWORD postgres

# COPY load-extensions.sh /docker-entrypoint-initdb.d/