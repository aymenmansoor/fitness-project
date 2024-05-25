#include<iostream>
#include<string>
using namespace std;
int main() {
	float  height, bmi, cardioDistance, cardioSpeed=0.0, duration, futureWorkoutDuration;
	int choice, age, contact, goal, weight, dis, cardioDuration, sets, reps;
	string futureWorkoutType, futureWorkoutDate, futureWorkoutDetails;
	string exerciseName, className, groupClassDate, groupClassType;
	string name, gender, option, y, health, f, m, cardioDate, weightliftingDate;
	int admssion_fees = 2000, groupClassOption,groupClassDuration;
	int monthly_fees = 5000;
	cout << "WELCOME TO TRYFIT FITNESS TRACKING APPLICATION" << '\n' << '\n';
	cout << "Select what you want \n\n";
	cout << "1. Menber Registration And Profile Creation " << '\n';
	cout << "2. Activity Tracking " << '\n';
	cout << "3. Workout Logging And Planning" << '\n';
	cout << "4. Progress Tracking And Analytics" << '\n';
	cout << "6. Administration Module" << '\n' << '\n';
	cout << "Enter your choice (1-6): ";
	cin >> choice;
	cout << endl;

	switch (choice) {
	case 1:
		cout << "PERSONAL DETAILS \n";
		cout << "Name: ";
		cin >> name;
		cout << "Age: ";
		cin >> age;
		cout << "Gender (f/m): ";
		cin >> gender;
		cout << "Contact No. : ";
		cin >> contact;
		cout << "Enter Your Weight in kg: ";
		cin >> weight;
		cout << "Enter Your Height in m: ";
		cin >> height;
		bmi = weight / (height * height);
		cout << "BMI: " << bmi << '\n';
		cout << "BMI Category: ";
		if (bmi < 15) {
			cout << "Starvation";
		}
		else if (bmi >= 15 && bmi <= 17.5) {
			cout << "Anorexic";
		}
		else if (bmi > 17.5 && bmi <= 18.5) {
			cout << "Underweight";
		}
		else if (bmi > 18.5 && bmi <= 24.9) {
			cout << "Ideal";
		}
		else if (bmi > 24.9 && bmi <= 29.9) {
			cout << "Overweight";
		}
		else if (bmi > 29.9 && bmi <= 34.9) {
			cout << "Obese";
		}
		else {
			cout << "Morbidly Obese";
		}

		cout << "\n  Do You Have Any Health Conditions (y/n): ";
		cin >> health;
		if (health == "y") {
			cout << "Name: ";
			cin >> name;
		}
		cout << "Would You like Additional Option (y/n): ";
		cin >> option;
		if (option == "y") {
			cout << "Fitness Goals: " << endl << endl;
			cout << "1. Weight Loss \n";
			cout << "2. Muscle Gain \n";
			cout << "3. Endurance Improvement \n";
			cout << "4. Flexibility and Mobility \n";
			cout << "5. General Fitness \n";
			cout << "6. Sport-Specific Training \n";
			cout << "7. Mind-Body Wellness \n";
			cout << "8. Functional Strength \n";
			cout << "9. Healthy Aging \n";
			cout << "10. Pre / Post Natal \n\n";
			cout << "Which Fitness Goal Would You Like: ";
			cin >> goal;
			switch (goal) {
			case 1:
				if (age >= 18) {
					cout << "Welcome To Weight Loss Goals: \n\n";
					cout << "Congratulations on taking the first step towards improving your health and achieving your weight loss goals!\n";
					cout << "While pursuing your weight loss goal, it's important to consider:\n";
					cout << "-Setting realistic and achievable goals\n";
					cout << "-Being patient and persistent, as weight loss takes time\n";
					cout << "-Overcoming obstacles such as cravings, emotional eating, and plateaus\n\n";
				}
				break;
			case 2:
				if (age >= 18) {
					cout << "Welcome To Muscle Gain Goals: \n\n";
					cout << "Congratulations on choosing to focus on muscle gain! Building muscle requires dedication and consistency. Here are some tips to help you achieve your muscle gain goals:\n";
					cout << "- Focus on compound exercises such as squats, deadlifts, bench presses, and rows to target multiple muscle groups.\n";
					cout << "- Lift heavy weights with proper form to stimulate muscle growth.\n";
					cout << "- Ensure you're consuming enough protein to support muscle repair and growth. Aim for at least 1 gram of protein per pound of body weight per day.\n";
					cout << "- Eat a balanced diet with plenty of whole foods to provide your body with the nutrients it needs to build muscle.\n";
					cout << "- Get enough rest and recovery between workouts to allow your muscles to repair and grow.\n";
					cout << "- Consider tracking your progress with measurements and adjusting your workouts and nutrition as needed.\n\n";
				}
				break;
			case 3:
				if (age >= 18) {
					cout << "Welcome To Endurance Improvement Goals : \n\n";
					cout << "Improving endurance is essential for enhancing cardiovascular health and overall fitness. Here are some strategies to help you boost your endurance:\n";
					cout << "- Incorporate cardiovascular exercises such as running, cycling, swimming, or brisk walking into your routine. Aim for at least 150 minutes of moderate-intensity aerobic activity per week.\n";
					cout << "- Gradually increase the duration and intensity of your workouts to challenge your cardiovascular system and improve endurance over time.\n";
					cout << "- Include interval training, alternating between periods of high-intensity effort and recovery, to enhance aerobic capacity and endurance.\n";
					cout << "- Cross-train with different activities to prevent boredom and reduce the risk of overuse injuries.\n";
					cout << "- Pay attention to proper breathing techniques during exercise to optimize oxygen intake and improve endurance.\n";
					cout << "- Stay hydrated and fuel your body with nutritious foods to support energy levels and endurance.\n";
					cout << "- Set specific goals for improving endurance, such as completing a longer distance run or participating in a challenging endurance event.\n\n";
				}
				break;
			case 4:
				if (age >= 18) {
					cout << "Welcome To Flexibility and Mobility Goals: \n\n";
					cout << "Improving flexibility and mobility is essential for maintaining joint health, preventing injuries, and enhancing overall movement quality. Here are some strategies to help you achieve your flexibility and mobility goals:\n";
					cout << "- Incorporate regular stretching exercises into your routine, focusing on major muscle groups and areas of tightness.\n";
					cout << "- Perform dynamic stretches before workouts to increase blood flow and prepare your muscles and joints for movement.\n";
					cout << "- Include static stretches after workouts to help relax muscles and improve flexibility over time.\n";
					cout << "- Consider incorporating activities such as yoga or Pilates, which emphasize flexibility, mobility, and body awareness.\n";
					cout << "- Use foam rollers, massage balls, or other mobility tools to target areas of tension and improve tissue quality.\n";
					cout << "- Practice mindful movement and body awareness to identify areas of restriction and work on improving them gradually.\n";
					cout << "- Listen to your body and avoid pushing into pain during stretching or mobility exercises. Focus on gentle, controlled movements.\n";
					cout << "- Stay consistent with your flexibility and mobility routine, as progress may take time but can lead to significant improvements in movement quality and joint health.\n\n";
				}
				break;
			case 5:
				if (age >= 18) {
					cout << "Welcome To General Fitness Goals: \n\n";
					cout << "General fitness encompasses various aspects of physical health, including cardiovascular endurance, muscular strength, flexibility, and body composition. Here are some strategies to help you achieve your general fitness goals:\n";
					cout << "- Engage in regular aerobic exercise such as walking, jogging, cycling, or swimming to improve cardiovascular health and endurance.\n";
					cout << "- Incorporate strength training exercises into your routine to build muscle, increase metabolism, and enhance overall strength and stability.\n";
					cout << "- Include flexibility and mobility exercises to maintain joint health, prevent injury, and improve overall movement quality.\n";
					cout << "- Eat a balanced diet rich in whole foods, including fruits, vegetables, lean proteins, whole grains, and healthy fats, to support energy levels, muscle recovery, and overall health.\n";
					cout << "- Stay hydrated by drinking plenty of water throughout the day, especially before, during, and after exercise.\n";
					cout << "- Get an adequate amount of sleep each night to support recovery, mood, and overall well-being.\n";
					cout << "- Manage stress through relaxation techniques such as deep breathing, meditation, or mindfulness practices.\n";
					cout << "- Set specific, measurable fitness goals and track your progress over time to stay motivated and focused on your fitness journey.\n";
					cout << "- Listen to your body and prioritize safety and enjoyment in your exercise routine.\n\n";
				}
				break;
			case 6:
				if (age >= 18) {
					cout << "Welcome To Sport-Specific Training Goals: \n\n";
					cout << "Sport-specific training focuses on enhancing skills, strength, and conditioning tailored to a particular sport or activity. Whether you're an athlete or a recreational enthusiast, here are some strategies to help you excel in your chosen sport:\n";
					cout << "- Identify the key physical demands of your sport, such as speed, agility, strength, endurance, or skill proficiency.\n";
					cout << "- Develop a training program that includes exercises and drills specific to your sport, targeting areas such as speed, power, agility, and sport-specific skills.\n";
					cout << "- Incorporate strength and conditioning workouts to improve overall fitness and reduce the risk of injury during sport-specific activities.\n";
					cout << "- Practice sport-specific skills regularly, focusing on technique, precision, and consistency.\n";
					cout << "- Include recovery strategies such as rest, proper nutrition, hydration, and injury prevention techniques to support optimal performance and recovery.\n";
					cout << "- Seek guidance from coaches, trainers, or experts in your sport to design a customized training plan and receive feedback on your progress.\n";
					cout << "- Set specific performance goals for your sport, such as improving speed, endurance, accuracy, or technique, and track your progress over time.\n";
					cout << "- Stay motivated and disciplined in your training regimen, consistently pushing yourself to improve and achieve your sport-specific objectives.\n\n";
				}
				break;
			case 7:
				if (age >= 18) {
					cout << "Welcome To Mind-Body Wellness Goals: \n\n";
					cout << "Mind-body wellness focuses on nurturing the connection between your mental and physical health, promoting overall well-being and harmony. Here are some strategies to help you cultivate mind-body wellness in your life:\n";
					cout << "- Practice mindfulness meditation to cultivate present-moment awareness, reduce stress, and enhance mental clarity and focus.\n";
					cout << "- Engage in relaxation techniques such as deep breathing exercises, progressive muscle relaxation, or guided imagery to promote relaxation and reduce tension in the body and mind.\n";
					cout << "- Incorporate yoga or tai chi into your routine to improve flexibility, balance, strength, and body awareness while fostering a sense of calm and inner peace.\n";
					cout << "- Spend time in nature, engaging in outdoor activities such as hiking, gardening, or simply immersing yourself in natural surroundings to rejuvenate your mind and spirit.\n";
					cout << "- Cultivate positive relationships and social connections, nurturing supportive friendships and engaging in meaningful interactions with others to foster a sense of belonging and emotional well-being.\n";
					cout << "- Prioritize self-care practices such as adequate sleep, nutritious eating, regular exercise, and setting boundaries to protect your physical and mental health.\n";
					cout << "- Explore creative outlets such as art, music, writing, or dance to express yourself, reduce stress, and tap into your inner creativity and intuition.\n";
					cout << "- Practice gratitude and positive thinking, focusing on the things you're grateful for and reframing challenges as opportunities for growth and learning.\n";
					cout << "- Listen to your body and mind, tuning in to your inner wisdom and intuition to guide your choices and actions in alignment with your values and priorities.\n\n";
				}
				break;
			case 8:
				if (age >= 18) {
					cout << "Welcome To Functional Strength Goals: \n\n";
					cout << "Functional strength training focuses on developing strength and mobility that translates to improved performance in everyday activities and movements. Here are some strategies to help you build functional strength:\n";
					cout << "- Incorporate compound exercises such as squats, deadlifts, lunges, presses, and rows into your workouts to target multiple muscle groups and movement patterns simultaneously.\n";
					cout << "- Emphasize movements that mimic activities of daily living, such as pushing, pulling, squatting, bending, lifting, and rotating, to improve functional movement patterns and joint stability.\n";
					cout << "- Include unilateral exercises to address muscle imbalances and improve balance, coordination, and proprioception on both sides of the body.\n";
					cout << "- Integrate functional movement drills and exercises that challenge coordination, agility, and dynamic stability, such as balance exercises, agility ladder drills, and medicine ball throws.\n";
					cout << "- Incorporate exercises that focus on core strength and stability to support proper posture, spinal alignment, and injury prevention during functional movements.\n";
					cout << "- Use a variety of equipment, such as free weights, resistance bands, kettlebells, and suspension trainers, to add variety and challenge to your functional strength workouts.\n";
					cout << "- Progressively overload your muscles by increasing resistance, volume, or intensity over time to continue stimulating strength gains and adaptation.\n";
					cout << "- Pay attention to proper exercise technique and form, prioritizing quality of movement over quantity of weight lifted to reduce the risk of injury and maximize functional gains.\n";
					cout << "- Apply functional strength principles to your daily activities and movements, focusing on efficient and effective movement patterns to enhance performance and reduce the risk of injury in everyday life.\n\n";
				}
				break;
			case 9:
				if (age >= 18) {
					cout << "Welcome To Healthy Aging Goals: \n\n";
					cout << "Healthy aging involves adopting lifestyle habits and practices that support physical health, cognitive function, emotional well-being, and overall quality of life as you age. Here are some strategies to help you age gracefully and maintain vitality:\n";
					cout << "- Stay physically active by engaging in regular exercise, including aerobic activities, strength training, flexibility exercises, and balance exercises to support mobility, strength, and cardiovascular health.\n";
					cout << "- Eat a balanced diet rich in fruits, vegetables, whole grains, lean proteins, and healthy fats to provide essential nutrients, support energy levels, and reduce the risk of chronic diseases such as heart disease, diabetes, and osteoporosis.\n";
					cout << "- Prioritize sleep and relaxation, aiming for adequate rest each night to support physical recovery, cognitive function, mood regulation, and overall well-being.\n";
					cout << "- Maintain social connections and engage in meaningful activities with family, friends, and community members to foster a sense of belonging, purpose, and emotional support as you age.\n";
					cout << "- Challenge your brain with mentally stimulating activities such as puzzles, games, reading, learning new skills, or engaging in creative pursuits to support cognitive function, memory, and mental acuity.\n";
					cout << "- Practice stress management techniques such as deep breathing, meditation, yoga, or tai chi to reduce stress, promote relaxation, and support emotional resilience and mental health.\n";
					cout << "- Stay proactive about preventive healthcare by scheduling regular check-ups, screenings, and vaccinations, and following medical advice and treatment plans to manage chronic conditions and maintain overall health.\n";
					cout << "- Cultivate a positive attitude and mindset towards aging, embracing life's changes and challenges with resilience, gratitude, and a sense of purpose.\n";
					cout << "- Listen to your body and honor its changing needs and limitations as you age, adapting your lifestyle habits and activities accordingly to support long-term health and well-being.\n\n";
				}
				break;
			default:
				if (age >= 18) {
					cout << "Welcome To Pre / Post Natal Goals: \n\n";
					cout << "Pre / Post Natal fitness focuses on supporting women's health and well-being during pregnancy and postpartum recovery. Here are some strategies to help you navigate this transformative journey:\n";
					cout << "- Consult with your healthcare provider before starting or continuing any exercise program during pregnancy to ensure it is safe and appropriate for your individual needs and health status.\n";
					cout << "- Engage in prenatal exercises that are gentle, low-impact, and pregnancy-safe, such as walking, swimming, prenatal yoga, or modified strength training, to maintain fitness, alleviate discomfort, and prepare the body for childbirth.\n";
					cout << "- Listen to your body and modify exercises as needed to accommodate changes in balance, flexibility, and energy levels during pregnancy, avoiding activities that cause discomfort, pain, or excessive strain on the body.\n";
					cout << "- Incorporate pelvic floor exercises and deep core activation to support pelvic health, stability, and function during pregnancy and promote postpartum recovery and healing after childbirth.\n";
					cout << "- Practice relaxation techniques such as prenatal meditation, deep breathing, or guided imagery to reduce stress, promote relaxation, and connect with your body and baby during pregnancy.\n";
					cout << "- After childbirth, gradually ease back into exercise with postnatal workouts that focus on rebuilding strength, improving posture, restoring pelvic floor function, and addressing common postpartum issues such as diastasis recti and pelvic instability.\n";
					cout << "- Prioritize self-care and rest during the postpartum period, allowing your body time to recover and heal, and seeking support from healthcare professionals, family, and friends as needed.\n";
					cout << "- Stay hydrated, eat nutritious meals, and prioritize sleep to support your physical recovery, hormone balance, and overall well-being during the postpartum period.\n";
					cout << "- Embrace the journey of motherhood with patience, compassion, and self-love, honoring your body's incredible ability to grow, birth, and nurture new life.\n\n";
				}
				break;
			}
		}
		cout << "Admission fees:" << admssion_fees << '\n';
		cout << "Monthly Fees: " << monthly_fees << endl<<endl;
		if (age <= 23 || age >= 49) {
			dis = (20 * monthly_fees) / 100;
			cout << "You got 20% discount!! \n";

		}
		break;
	case 2:
		do {
			cout << "ACTIVITY TRACKER \n\n";
			cout << "1. Log Cardio Activity" << endl;
			cout << "2. Log Weightlifting Activity" << endl;
			cout << "3. Log Group Classes  Activity" << endl;
			cout << "4. Display Activities" << endl;
			cout << "5. Plan Future Workouts" << endl;
			cout << "6. Provide Workout Suggestions" << endl;
			cout << "7. Exit" << endl<<endl;
			cout << "Enter your choice (1-7): ";
			cin >> choice;
			cout << endl;
			switch (choice) {
			case 1:
				cout << "Enter date (YYYY-MM-DD): ";
				cin >> cardioDate;
				cout << "Enter duration (minutes): ";
				cin >> cardioDuration;
				cout << "Enter distance (km): ";
				cin >> cardioDistance;
				cardioSpeed = cardioDistance / (cardioDuration / 60.0);
				cout << "Cardio activity logged successfully!" << endl;
				break;
			case 2:
				cout << "Enter date (YYYY-MM-DD): ";
				cin >> weightliftingDate;
				cout << "Enter exercise name: ";
				getline(cin, exerciseName);
				cout << "Enter number of sets: ";
				cin >> sets;
				cout << "Enter number of reps per set: ";
				cin >> reps;
				cout << "Enter weight lifted (kg): ";
				cin >> weight;
				cout << "Weightlifting activity logged successfully!" << endl;
				break;
			case 3:
				cout << "Choose a fitness goal for group class:\n";
				cout << "1. Weight Loss\n";
				cout << "2. Muscle Gain\n";
				cout << "3. Endurance Improvement\n";
				cout << "4. Flexibility and Mobility\n";
				cout << "5. General Fitness\n";
				cout << "6. Sport-Specific Training\n";
				cout << "7. Mind-Body Wellness\n";
				cout << "8. Functional Strength\n";
				cout << "9. Healthy Aging\n";
				cout << "10. Pre/Post Natal\n\n";
				cout << "Enter your choice (1-10): ";
				cin >> groupClassOption;

				switch (groupClassOption) {
				case 1:
					groupClassType = "Aerobics";
					break;
				case 2:
					groupClassType = "Strength Training";
					break;
				case 3:
					groupClassType = "Circuit Training";
					break;
				case 4:
					groupClassType = "Yoga";
					break;
				case 5:
					groupClassType = "Full-Body Workout";
					break;
				case 6:
					groupClassType = "Soccer Training";
					break;
				case 7:
					groupClassType = "Tai Chi";
					break;
				case 8:
					groupClassType = "CrossFit";
					break;
				case 9:
					groupClassType = "Senior Fitness";
					break;
				case 10:
					groupClassType = "Prenatal Yoga";
					break;
				default:
					cout << "Invalid choice. Please try again." << endl;
					continue; 
				}
				cout << "Enter date (YYYY-MM-DD): ";
				cin >> groupClassDate;
				cout << "Enter duration (minutes): ";
				cin >> groupClassDuration;
				cout << groupClassType << " class activity logged successfully!" << endl;
				break;
				
			case 4:
				cout << "\nLogged Cardio Activity:" << endl;
				if (!cardioDate.empty()) {
					cout << "Date: " << cardioDate;
					cout << ", Duration: " << cardioDuration << " minutes";
					cout << ", Distance: " << cardioDistance << " km";
					cout << ", Speed: " << cardioSpeed << " km/h" << endl;
				}
				else {
					cout << "No cardio activity logged." << endl;
				}

				cout << "\nLogged Weightlifting Activity:" << endl;
				if (!weightliftingDate.empty()) {
					cout << "Date: " << weightliftingDate;
					cout << ", Exercise: " << exerciseName;
					cout << ", Sets: " << sets;
					cout << ", Reps per set: " << reps;
					cout << ", Weight: " << weight << " kg" << endl;
				}
				else {
					cout << "No weightlifting activity logged." << endl;
				}
				cout << "\nLogged Group Classes Activity:" << endl;
				if (!groupClassDate.empty()) {
					cout << "Date: " << groupClassDate;
					cout << ", Class Type: " << groupClassType;
					cout << ", Duration: " << groupClassDuration << " minutes" << endl;
				}
				else {
					cout << "No group class activity logged." << endl;
				}
				break;
			case 5:
				 cout << "Enter type of workout: ";
                 cin.ignore();
                 getline(cin, futureWorkoutType);
                 cout << "Enter date (YYYY-MM-DD): ";
                 cin >> futureWorkoutDate;
                 cout << "Enter duration (minutes): ";
                 cin >> futureWorkoutDuration;
                 cout << "Enter any additional details: ";
                 getline(cin, futureWorkoutDetails);
                 cout << "Future workout planned successfully!" << endl;
		    	 break;
			case 6:
				cout << "Workout Suggestions based on your goals:\n";
				cout << "1. For Weight Loss: Try incorporating more cardio and high-intensity interval training (HIIT).\n";
				cout << "2. For Muscle Gain: Focus on strength training with progressive overload.\n";
				cout << "3. For Endurance Improvement: Include longer duration cardio sessions and stamina-building exercises.\n";
				cout << "4. For Flexibility and Mobility: Add yoga and stretching routines to your plan.\n";
				cout << "5. For General Fitness: Mix different types of workouts for a balanced routine.\n";
				cout << "6. For Sport-Specific Training: Tailor exercises to the specific movements of your sport.\n";
				cout << "7. For Mind-Body Wellness: Practice activities like yoga, Pilates, and tai chi.\n";
				cout << "8. For Functional Strength: Focus on compound movements and bodyweight exercises.\n";
				cout << "9. For Healthy Aging: Incorporate low-impact exercises and strength training.\n";
				cout << "10. For Pre/Post Natal: Follow exercises specifically designed for pre/post-natal fitness.\n";
				break;
			case 7:
				cout << "Exiting the application.\n";
				break;
			default:
				cout << "Invalid choice. Please try again. ";
				break;
			}
		} while (choice!=7);
		break;
	case 3:
		break;
	case 4:
		break;
	case 5:
		break;
	case 6:
		break;
	default:
		cout << "Enter no. b/w 1-6 only";
		break;
	}
	return 0;
}