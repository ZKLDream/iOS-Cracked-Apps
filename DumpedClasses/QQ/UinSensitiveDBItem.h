//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface UinSensitiveDBItem : NSObject
{
    struct set<__unsafe_unretained id<DBAccountChangedProtocol>, std::less<__unsafe_unretained id<DBAccountChangedProtocol>>, std::allocator<__unsafe_unretained id<DBAccountChangedProtocol>>> _listenerSet;
    NSString *_className;
    id <IUinSensitiveDBDelegate> _db;
    NSString *_uin;
    int _xo;
}

@property(retain, nonatomic) NSString *uin; // @synthesize uin=_uin;
@property(retain, nonatomic) id <IUinSensitiveDBDelegate> db; // @synthesize db=_db;
@property(retain, nonatomic) NSString *className; // @synthesize className=_className;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)notifyAccountWillChange;
- (void)notifyAccountChanged:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;

@end
