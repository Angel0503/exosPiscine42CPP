class Fixed{
    private:
        int m_fixedPointValue;
        static const int m_numberOfFractionalBits = 8;

    public:
        Fixed();
        ~Fixed();
        Fixed(const Fixed&);
        
        Fixed& operator=(const Fixed&);

        int getRawBits(void) const;
        void setRawBits(int const raw);
};

