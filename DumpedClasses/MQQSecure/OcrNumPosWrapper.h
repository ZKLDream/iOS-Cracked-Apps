//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface OcrNumPosWrapper : NSObject
{
    NSString *number;
    CDStruct_bf95b13b position;
    long long nconf;
}

- (void).cxx_destruct;
- (void)setConf:(long long)arg1;
- (void)setNumber:(id)arg1;
- (void)setPos:(CDStruct_bf95b13b)arg1;

@end

