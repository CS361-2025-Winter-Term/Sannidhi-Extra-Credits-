class LoginView {
    private:
        std::string username;
        std::string password;
        std::string email;
        NotificationPreferences notificationPreferences;
    public:
        std::string readUsernameTextbox() const;
        std::string readPasswordTextbox() const;
        std::string readEmailTextbox() const;
        NotificationPreferences readNotificationPreferences() const;
        void registerUser(const UserProfile& userProfile, const std::string& password);
        void displayError(const std::string& message) const;
        void transitionToHomeView(const UserProfile& userProfile) const;
};
    