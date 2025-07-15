//
// Created by dell on 2022-5-12.
//

#pragma once

#include "student.h"
#include "teacher.h"

class Graduate : virtual public Student {
public:
	//Default constructor
	Graduate() = default;
	// Destructor
	~Graduate() = default;
	// Parameterized constructor
	Graduate(int num, const std::string& name, char gender, const std::string& birth, const std::string& id, int class_no, const std::string& subject,
		Teacher& adviser);
	// Copy constructor
	Graduate(Graduate& graduate);
	// Print information
	void Show();
	// get subject
	const std::string& getSubject() const;
	// set subject
	void setSubject(const std::string& subject);
	// get adviser name
	const std::string& getAdviserName() const;
	// set adviser
	void setAdviser(Teacher adviser);

protected:
	std::string subject;
	Teacher adviser;
};
