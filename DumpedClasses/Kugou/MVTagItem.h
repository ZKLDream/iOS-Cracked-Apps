//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MVTagBean;

@interface MVTagItem : NSObject
{
    MVTagBean *tagBean;
    long long childIndex;
}

@property(nonatomic) long long childIndex; // @synthesize childIndex;
@property(retain, nonatomic) MVTagBean *tagBean; // @synthesize tagBean;
- (void).cxx_destruct;

@end

