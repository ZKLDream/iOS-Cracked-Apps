//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol MRCommandDelegate;

@interface MRCommand : NSObject
{
    id <MRCommandDelegate> _delegate;
}

+ (id)commandForString:(id)arg1;
+ (Class)commandClassForString:(id)arg1;
+ (id)commandType;
+ (void)registerCommand:(Class)arg1;
+ (id)sharedCommandClassMap;
@property(nonatomic) __weak id <MRCommandDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)urlFromParameters:(id)arg1 forKey:(id)arg2;
- (id)stringFromParameters:(id)arg1 forKey:(id)arg2;
- (int)intFromParameters:(id)arg1 forKey:(id)arg2;
- (_Bool)boolFromParameters:(id)arg1 forKey:(id)arg2;
- (double)floatFromParameters:(id)arg1 forKey:(id)arg2 withDefault:(double)arg3;
- (double)floatFromParameters:(id)arg1 forKey:(id)arg2;
- (_Bool)executeWithParams:(id)arg1;
- (_Bool)requiresUserInteractionForPlacementType:(unsigned long long)arg1;

@end

