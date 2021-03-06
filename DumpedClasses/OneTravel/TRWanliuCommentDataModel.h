//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSONModel.h"

@class NSArray<Optional>, NSNumber<Optional>, NSString<Optional>;

@interface TRWanliuCommentDataModel : JSONModel
{
    NSNumber<Optional> *_isCommented;
    NSNumber<Optional> *_score;
    NSArray<Optional> *_tags;
    NSString<Optional> *_content;
    NSString<Optional> *_level_text;
    NSString<Optional> *_negative_text;
}

@property(copy, nonatomic) NSString<Optional> *negative_text; // @synthesize negative_text=_negative_text;
@property(copy, nonatomic) NSString<Optional> *level_text; // @synthesize level_text=_level_text;
@property(copy, nonatomic) NSString<Optional> *content; // @synthesize content=_content;
@property(retain, nonatomic) NSArray<Optional> *tags; // @synthesize tags=_tags;
@property(retain, nonatomic) NSNumber<Optional> *score; // @synthesize score=_score;
@property(retain, nonatomic) NSNumber<Optional> *isCommented; // @synthesize isCommented=_isCommented;
- (void).cxx_destruct;

@end

