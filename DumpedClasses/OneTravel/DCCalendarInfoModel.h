//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSONModel.h"

@class NSArray<Optional><DCCalendarModel>, NSString<Optional>;

@interface DCCalendarInfoModel : JSONModel
{
    NSString<Optional> *_cur_date_id;
    NSString<Optional> *_cur_update_time;
    NSArray<Optional><DCCalendarModel> *_list;
}

@property(copy, nonatomic) NSArray<Optional><DCCalendarModel> *list; // @synthesize list=_list;
@property(copy, nonatomic) NSString<Optional> *cur_update_time; // @synthesize cur_update_time=_cur_update_time;
@property(copy, nonatomic) NSString<Optional> *cur_date_id; // @synthesize cur_date_id=_cur_date_id;
- (void).cxx_destruct;

@end

