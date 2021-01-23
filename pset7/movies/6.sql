select avg(rating) from ratings
    join movies ON ratings.movie_id= movies.id
        where year = 2012;