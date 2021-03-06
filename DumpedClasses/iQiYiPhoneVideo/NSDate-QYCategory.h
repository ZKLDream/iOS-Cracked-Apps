//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSDate.h>

@interface NSDate (QYCategory)
+ (id)dateFromDateInformation:(struct QYDateInformation)arg1;
+ (id)dateFromDateInformation:(struct QYDateInformation)arg1 timeZone:(id)arg2;
+ (id)dateWithDatePart:(id)arg1 andTimePart:(id)arg2;
+ (id)month;
+ (id)yesterday;
- (struct QYDateInformation)dateInformation;
- (struct QYDateInformation)dateInformationWithTimeZone:(id)arg1;
- (id)yearString;
- (id)monthString;
- (id)dateByAddingDays:(unsigned long long)arg1;
- (_Bool)isToday;
- (long long)daysBetweenDate:(id)arg1;
- (int)monthsBetweenDate:(id)arg1;
- (_Bool)isSameDay:(id)arg1;
- (id)monthlessDate;
- (id)timelessDate;
- (int)weekday;
- (id)monthDate;
@end

