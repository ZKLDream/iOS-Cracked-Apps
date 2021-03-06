//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FMDatabaseQueue;

@interface XYKeyValueStore : NSObject
{
    FMDatabaseQueue *_dbQueue;
}

+ (_Bool)checkTableName:(id)arg1;
@property(retain, nonatomic) FMDatabaseQueue *dbQueue; // @synthesize dbQueue=_dbQueue;
- (void).cxx_destruct;
- (void)close;
- (void)deleteObjectsByIdPrefix:(id)arg1 fromTable:(id)arg2;
- (void)deleteObjectsByIdArray:(id)arg1 fromTable:(id)arg2;
- (void)deleteObjectById:(id)arg1 fromTable:(id)arg2;
- (id)getAllItemsBeforeTime:(id)arg1 fromTable:(id)arg2;
- (id)getAllItemsFromTable:(id)arg1;
- (id)getYTKKeyValueItemById:(id)arg1 fromTable:(id)arg2;
- (id)getNumberById:(id)arg1 fromTable:(id)arg2;
- (void)putNumber:(id)arg1 withId:(id)arg2 intoTable:(id)arg3;
- (id)getStringById:(id)arg1 fromTable:(id)arg2;
- (void)putString:(id)arg1 withId:(id)arg2 intoTable:(id)arg3;
- (id)getObjectById:(id)arg1 fromTable:(id)arg2;
- (void)putObject:(id)arg1 withId:(id)arg2 intoTable:(id)arg3;
- (id)getCustomObjectById:(id)arg1 fromTable:(id)arg2;
- (void)putCustomObject:(id)arg1 withId:(id)arg2 intoTable:(id)arg3;
- (void)clearTable:(id)arg1;
- (_Bool)isTableExists:(id)arg1;
- (void)createTableWithName:(id)arg1;
- (id)initWithDBWithPath:(id)arg1;
- (id)initDBWithName:(id)arg1;
- (id)init;

@end

