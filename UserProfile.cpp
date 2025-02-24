class UserProfile {
    private:
        std::string username;
        std::string email;
        NotificationPreferences notifSettings;    
    public:
        // Constructor
        UserProfile(const std::string& uname, const std::string& mail, const NotificationPreferences& notifPrefs);
    
        // Getters
        std::string getUsername() const;
        std::string getEmail() const;
        NotificationPreferences getNotificationPreferences() const;
    
        // Setters
        void setUsername(const std::string& uname);
        void setEmail(const std::string& mail);
        void setNotificationPreferences(const NotificationPreferences& notifPrefs);
    };
    