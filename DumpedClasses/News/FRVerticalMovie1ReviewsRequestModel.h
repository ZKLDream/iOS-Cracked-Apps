//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTRequestModel.h"

@class NSNumber, NSNumber<Optional>, NSString;

@interface FRVerticalMovie1ReviewsRequestModel : TTRequestModel
{
    NSString *_concern_id;
    NSNumber *_count;
    NSNumber *_review_cursor;
    NSNumber *_post_cursor;
    NSNumber<Optional> *_sort_type;
}

@property(retain, nonatomic) NSNumber<Optional> *sort_type; // @synthesize sort_type=_sort_type;
@property(retain, nonatomic) NSNumber *post_cursor; // @synthesize post_cursor=_post_cursor;
@property(retain, nonatomic) NSNumber *review_cursor; // @synthesize review_cursor=_review_cursor;
@property(retain, nonatomic) NSNumber *count; // @synthesize count=_count;
@property(retain, nonatomic) NSString *concern_id; // @synthesize concern_id=_concern_id;
- (void).cxx_destruct;
- (id)_requestParams;
- (id)init;

@end

