//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QQWeakSet.h"

@class NSMutableSet, NSString;

@interface QQWeakSet : NSObject <QQWeakSet>
{
    NSMutableSet *_wrappers;
}

- (void).cxx_destruct;
- (void)enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (void)removeAllObjects;
- (void)removeObject:(id)arg1;
- (void)addObject:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

