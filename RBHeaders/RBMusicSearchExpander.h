//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface RBMusicSearchExpander : NSObject
{
    NSMutableDictionary *_expandDict;
}

+ (void)copyDictionary;
@property(retain, nonatomic) NSMutableDictionary *expandDict; // @synthesize expandDict=_expandDict;
- (void).cxx_destruct;
- (void)saveDictionary;
- (void)loadDictionary;
- (_Bool)addDictionary:(id)arg1;
- (_Bool)addSearchInfo:(id)arg1 addWords:(id)arg2;
- (id)getDictionary;
- (id)init;

@end
