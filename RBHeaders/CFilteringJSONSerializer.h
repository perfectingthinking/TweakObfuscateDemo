//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CJSONSerializer.h"

@class NSDictionary, NSSet;

@interface CFilteringJSONSerializer : CJSONSerializer
{
    NSSet *tests;
    NSDictionary *convertersByName;
}

@property(retain, nonatomic) NSDictionary *convertersByName; // @synthesize convertersByName;
@property(retain, nonatomic) NSSet *tests; // @synthesize tests;
- (void).cxx_destruct;
- (void)addConverter:(CDUnknownBlockType)arg1 forName:(id)arg2;
- (void)addTest:(CDUnknownBlockType)arg1;
- (id)serializeObject:(id)arg1 error:(id *)arg2;
- (id)init;

@end
