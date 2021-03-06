//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray;

@interface MCAddressBook : NSObject
{
    _Bool _contactsLoaded;
    NSMutableArray *_allContacts;
}

+ (_Bool)restricted;
+ (_Bool)denined;
+ (_Bool)authorized;
+ (_Bool)authorizationDetermined;
+ (id)addressBook;
+ (_Bool)checkAddressBookAccessPermission;
- (void)dealloc;
- (id)init;
- (void)abAddressBookChanged:(id)arg1;
@property(readonly, nonatomic) NSArray *allContacts; // @dynamic allContacts;
- (id)searchContacts:(id)arg1;
- (void)reloadContacts;
- (void)clearContacts;
- (void)loadContacts;

@end

