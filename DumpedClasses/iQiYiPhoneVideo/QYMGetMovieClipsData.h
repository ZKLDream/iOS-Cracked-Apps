//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface QYMGetMovieClipsData : NSObject
{
    NSArray *_clips;
    NSString *_code;
    NSString *_timestamp;
}

@property(copy, nonatomic) NSString *timestamp; // @synthesize timestamp=_timestamp;
@property(copy, nonatomic) NSString *code; // @synthesize code=_code;
@property(retain, nonatomic) NSArray *clips; // @synthesize clips=_clips;
- (void).cxx_destruct;
- (void)buildWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

