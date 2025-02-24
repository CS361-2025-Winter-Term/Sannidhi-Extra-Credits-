class NotificationPreferences {
    private:
        std::string frequency;
        bool isEnabled;
    
    public:
        // Constructor
        NotificationPreferences(const std::string& freq, bool enabled);
        //getters 
        std::string getFrequency() const;
        bool getIsEnabled() const;
        // Setters
        void setFrequency(const std::string& freq);
        void setIsEnabled(bool enabled);
    };
    