//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface DFileObj : NSObject
{
    CDStruct_7bb32e46 m_info;
    int m_filenamelength;
    unsigned long long m_size;
    NSString *m_hash;
    _Bool m_gzip;
    _Bool m_base64;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (CDStruct_7bb32e46 *)GetDownloadListInfoP;
- (CDStruct_7bb32e46)GetDownloadListInfo;
- (_Bool)GetBase64;
- (_Bool)GetGZip;
- (long long)GetSize;
- (id)GetHash;
- (char *)GetDirectory;
- (char *)GetTag;
- (char *)GetKey;
- (int)GetVer;
- (int)GetFileNameLength;
- (char *)GetFileName;
- (char *)GetFullPath;
- (void)SetDataFromXMLNode:(id)arg1;
- (void)SetDataFromFileListInfo:(CDStruct_7bb32e46 *)arg1;
- (void)dealloc;
- (id)init;

@end
