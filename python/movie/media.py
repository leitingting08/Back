import webbrowser

class Movie():
    def __init__(self, movie_title, movie_storyline, poster_image, trailar_youtube):
        self.title = movie_title
        self.storyline = movie_storyline
        self.poster_image_url = poster_image
        self.trailar_youtube_url = trailar_youtube
    def show_trailer(self):
        webbrowser.open(self.trailar_youtube_url)

        
