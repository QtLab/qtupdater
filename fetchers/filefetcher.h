#ifndef FILEFETCHER_H
#define FILEFETCHER_H

#include "fetcher.h"

#include <QUrl>

class FileFetcherPrivate;

class FileFetcher : public Fetcher
{
    Q_OBJECT
public:
    explicit FileFetcher(const QUrl url, QObject *parent = 0);
    ~FileFetcher();

    void fetch();

private:
    Q_DISABLE_COPY(FileFetcher)
    Q_DECLARE_PRIVATE(FileFetcher)
    FileFetcherPrivate * const d_ptr;
};

#endif // FILEFETCHER_H
