select movies.title, ratings.rating from movies
    join ratings on movies.id = ratings.movie_id
        where year = 2010
            order by 2 DESC,1