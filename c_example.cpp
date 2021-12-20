#include <iostream> //C
#include <stdio.h> //C
#include <curl/curl.h> //C++
#include <string> //C++


void get_random_prime() {
    CURL* curl;
    CURLcode res;

    char api_key[4] = "YOUR_API_KEY";
    char include_explanations[6] = "true";
    char include_prime_types_list[6] = "true";
    char language[8] = "english";

    curl = curl_easy_init();
    std::string url = std::string("http://api.prime-numbers.io/get-random-prime.php?key=") + std::string(api_key) + std::string("&include_explanations=") + std::string(include_explanations) + std::string("&include_prime_types_list=") + std::string(include_prime_types_list) + std::string("&language=") + std::string(language);
    if (curl) {
        
        curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
        /* example.com is redirected, so we tell libcurl to follow redirection */
        curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1L);

        /* Perform the request, res will get the return code */
        res = curl_easy_perform(curl);
        /* Check for errors */
        if (res != CURLE_OK)
            fprintf(stderr, "curl_easy_perform() failed: %s\n",
                curl_easy_strerror(res));

        /* always cleanup */
        curl_easy_cleanup(curl);
    }
}

void is_this_number_prime() {
    CURL* curl;
    CURLcode res;

    char api_key[4] = "YOUR_API_KEY";
    char include_explanations[6] = "true";
    char include_prime_types_list[6] = "true";
    char number[15] = "60309232769";
    char language[8] = "english";

    curl = curl_easy_init();
    std::string url = std::string("http://api.prime-numbers.io/is-this-number-prime.php?key=") + std::string(api_key) + std::string("&number=") + std::string(number) + std::string("&include_explanations=") + std::string(include_explanations) + std::string("&include_prime_types_list=") + std::string(include_prime_types_list) + std::string("&language=") + std::string(language);
    if (curl) {

        curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
        curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1L);

        res = curl_easy_perform(curl);
        if (res != CURLE_OK)
            fprintf(stderr, "curl_easy_perform() failed: %s\n",
                curl_easy_strerror(res));

        curl_easy_cleanup(curl);
    }
}

void get_all_primes_between_two_numbers() {
    CURL* curl;
    CURLcode res;

    char api_key[4] = "YOUR_API_KEY";
    char include_explanations[6] = "false";
    char include_prime_types_list[6] = "false";
    char start[15] = "69";
    char end[15] = "200";
    char forced_number[15] = "53";
    char language[8] = "english";

    curl = curl_easy_init();
    std::string url = std::string("http://api.prime-numbers.io/get-all-primes-between-two-numbers.php?key=") + std::string(api_key) + std::string("&start=") + std::string(start) + std::string("&end=") + std::string(end) + std::string("&forced_number=") + std::string(forced_number) + std::string("&include_explanations=") + std::string(include_explanations) + std::string("&include_prime_types_list=") + std::string(include_prime_types_list) + std::string("&language=") + std::string(language);
    if (curl) {

        curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
        curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1L);

        res = curl_easy_perform(curl);
        if (res != CURLE_OK)
            fprintf(stderr, "curl_easy_perform() failed: %s\n",
                curl_easy_strerror(res));

        curl_easy_cleanup(curl);
    }
}


void prospect_primes_between_two_numbers() {
    CURL* curl;
    CURLcode res;

    char api_key[4] = "YOUR_API_KEY";
    char include_explanations[6] = "false";
    char include_prime_types_list[6] = "false";
    char start[15] = "350";
    char end[15] = "1000";
    char language[8] = "english";

    curl = curl_easy_init();
    std::string url = std::string("http://api.prime-numbers.io/prospect-primes-between-two-numbers.php?key=") + std::string(api_key) + std::string("&start=") + std::string(start) + std::string("&end=") + std::string(end) + std::string("&include_explanations=") + std::string(include_explanations) + std::string("&include_prime_types_list=") + std::string(include_prime_types_list) + std::string("&language=") + std::string(language);
    if (curl) {

        curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
        curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1L);

        res = curl_easy_perform(curl);
        if (res != CURLE_OK)
            fprintf(stderr, "curl_easy_perform() failed: %s\n",
                curl_easy_strerror(res));

        curl_easy_cleanup(curl);
    }
}

void get_isolated_random_prime() {
    CURL* curl;
    CURLcode res;

    char api_key[4] = "YOUR_API_KEY";
    char include_explanations[6] = "false";
    char include_prime_types_list[6] = "false";
    char minimum_combined_prime_gap[4] = "250";
    char forced_number[15] = "60309232769";
    char language[8] = "english";

    curl = curl_easy_init();
    std::string url = std::string("http://api.prime-numbers.io/get-isolated-random-prime.php?key=") + std::string(api_key) + std::string("&minimum_combined_prime_gap=") + std::string(minimum_combined_prime_gap) + std::string("&forced_number=") + std::string(forced_number) + std::string("&include_explanations=") + std::string(include_explanations) + std::string("&include_prime_types_list=") + std::string(include_prime_types_list) + std::string("&language=") + std::string(language);
    if (curl) {

        curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
        curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1L);

        res = curl_easy_perform(curl);
        if (res != CURLE_OK)
            fprintf(stderr, "curl_easy_perform() failed: %s\n",
                curl_easy_strerror(res));

        curl_easy_cleanup(curl);
    }
}



int main(void)
{
    get_random_prime();
    //is_this_number_prime();
    //get_all_primes_between_two_numbers();
    //prospect_primes_between_two_numbers();
    //get_isolated_random_prime();
    return 0;
}