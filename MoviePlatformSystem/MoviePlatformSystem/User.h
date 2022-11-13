#pragma once
#include <string>
#include <optional>

class User
{

private:
	std::string m_id; // PK
	std::string m_username;
	std::string m_password;
	std::string m_userInfoId; // FK
	std::optional<std::string> m_userPreferencesId; // FK
	std::optional<std::string> m_watchedId; // FK
	std::optional<std::string> m_wishlistId; // FK



public:
	User(); // no parameters constr.
	User(std::string id, std::string username, std::string password, std::string userInfoId, std::optional<std::string> userPreferencesId, std::optional<std::string> watchedId,
		std::optional<std::string> wishlistId);
	~User();

	//setters
	void setId(const std::string& id);
	void setUsername(const std::string& username);
	void setPassword(const std::string& password);
	void setUserInfoId(const std::string& userInfoId);
	void setUserPreferencesId(const std::optional<std::string>& userPreferencesId);
	void setWatchedId(const std::optional<std::string>& watchedId);
	void setWishlistId(const std::optional<std::string>& wishlistId);


	//getters
	std::string getId() const;
	std::string getUsername() const;
	std::string getPassword() const;
	std::string getUserInfoId() const;
	std::optional<std::string> getUserPreferencesId() const;
	std::optional<std::string> getWatchedId() const;
	std::optional<std::string> getWishlistId() const;


};

