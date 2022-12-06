#pragma once

#include <QMainWindow>
#include "ui_MovieView.h"
#include "DataBase.h"
#include "Movie.h"
#include "User.h"
#include "MovieDashboard.h"

class MovieView : public QMainWindow
{
	Q_OBJECT

public:
	MovieView(std::optional<User> loggedUser, int MovieId, QWidget *parent = nullptr);
	~MovieView();
	void setMovieView(QList<QString> movieInfo, QPixmap moviePoster);
	void setMoviePoster(QPixmap image);
	void setMovieTitle(QString title);
	void setMovieRating();
	void setMovieDirector(QString director);
	void setMovieCast(QString cast);
	void setMovieCountry(QString country);
	void setMovieReleaseYear(QString release_year);
	void setMovieDescription(QString description);
	void setMovieListedIn(QString listed_in);
	void setMovieTypeAndDuration(QString type, QString duration);

private slots:
	void on_watchedButton_clicked();
	void on_wishlistButton_clicked();

private:
	Ui::MovieViewClass ui;
	Database* database = Database::connect();
	std::optional<User> m_loggedUser;
	int m_selectedMovieId;
};
