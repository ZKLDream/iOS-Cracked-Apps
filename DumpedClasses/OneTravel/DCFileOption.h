//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface DCFileOption : NSObject
{
    long long _roleType;
    long long _saveType;
    NSString *_customPath;
}

+ (id)defaultOption;
@property(copy, nonatomic) NSString *customPath; // @synthesize customPath=_customPath;
@property(nonatomic) long long saveType; // @synthesize saveType=_saveType;
@property(nonatomic) long long roleType; // @synthesize roleType=_roleType;
- (void).cxx_destruct;
- (id)init;

@end

