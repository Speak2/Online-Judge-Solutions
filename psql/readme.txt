
1) Build Docker Image
> docker build -t postgreslocal .
 
2) Run
> docker-compose up -d 

3) To connect running container using psql client run,
> psql -h localhost -p 5433 -U postgres

4) Put password as `p@stgress` that is specified in docker-compose, 
you may change this.
